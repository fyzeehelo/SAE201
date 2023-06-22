#include "livre.h"

const QString &Livre::getTitre() const
{
    return titre;
}

void Livre::setTitre(const QString &newTitre)
{
    titre = newTitre;
}

int Livre::getNbPages() const
{
    return nbPages;
}

void Livre::setNbPages(int newNbPages)
{
    nbPages = newNbPages;
}

void Livre::addPage(Page newPage){
    this->listePages.push_back(newPage);
}

Page Livre::getPage(int n){
    return this->listePages[n-1];
}

int Livre::addFilesToPageList(const string& folderPath)
{
    int compt=0;
    for (const auto& entry : filesystem::directory_iterator(folderPath))
    {
        if (entry.is_regular_file() && entry.path().extension() == ".txt")
        {
            ifstream inputFile(entry.path());
            if (inputFile)
            {
                stringstream buffer;
                buffer << inputFile.rdbuf();
                Page page(compt);
                page.setPath(entry.path().filename().string().c_str());
                page.setTexte(QString::fromStdString(buffer.str()));
                listePages.append(page);
                inputFile.close();
            }
            else
            {
                std::cout << "Error opening file: " << entry.path() << std::endl;
            }
        }
        compt++;
    }

    return compt;
}
