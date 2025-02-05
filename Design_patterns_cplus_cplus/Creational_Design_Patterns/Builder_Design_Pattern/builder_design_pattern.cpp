# include <iostream>
using namespace std;

class Desktop
{
    public :
             string motherboard;
             string processor;
             string memory;
             string storage;
             string graphicsCard;

            void display()
            {
                cout << "Desktops specifications" << endl;
                cout << "Motherboard: " << motherboard << endl;
                cout << "Processor: " << processor << endl;
                cout << "Memory: " << memory << endl;
                cout << "Storage: " << storage << endl;
                cout << "GraphicsCard: " << graphicsCard << endl;
            }
};

class DesktopBuilder
{
   protected:
              Desktop desktop;
   public:
           virtual void buildMotherboard() = 0;
           virtual void buildProcessor() = 0;
           virtual void buildMemory() = 0;
           virtual void buildStorage() = 0;
           virtual void buildGraphicsCard() = 0; 

           Desktop getDesktop()
           {
            return desktop;
           }

};

class DellDesktopBuilder: public DesktopBuilder
{

    public:
             void buildMotherboard(){
                desktop.motherboard = "Dell Motherbaord";

             }

             void buildProcessor(){
                desktop.processor = "Dell Processor";
             }

             void buildMemory(){
                desktop.memory = "Dell Memory";
             }
              
             void buildStorage(){
                desktop.storage = "Dell Storage";
             }

             void buildGraphicsCard(){
                desktop.graphicsCard = "Dell GraphicCard";
             }


};



class HPDesktopBuilder: public DesktopBuilder
{

    public:
             void buildMotherboard(){
                desktop.motherboard = "HP Motherbaord";

             }

             void buildProcessor(){
                desktop.processor = "HP Processor";
             }

             void buildMemory(){
                desktop.memory = "HP Memory";
             }
              
             void buildStorage(){
                desktop.storage = "HP Storage";
             }

             void buildGraphicsCard(){
                desktop.graphicsCard = "HP GraphicCard";
             }


};


class DesktopDirector
{
    public :
               Desktop buildDesktop(DesktopBuilder &builder)
               {
                builder.buildMotherboard();
                builder.buildProcessor();
                builder.buildMemory();
                builder.buildStorage();
                builder.buildGraphicsCard();
                return builder.getDesktop();
               }
};


int main()
{
    DesktopDirector director;

    DellDesktopBuilder dellDesktopBuilder;
    Desktop dellDesktop = director.buildDesktop(dellDesktopBuilder);
    dellDesktop.display();

    HPDesktopBuilder hpDesktopBuilder;
    Desktop hpDesktop = director.buildDesktop(hpDesktopBuilder);
    hpDesktop.display();

    return 0;
}