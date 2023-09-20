#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<time.h>
#include<iostream>
#include<sstream>

using namespace sf;
using namespace std;
class doodle{

private:
 struct Point {int x,y;};
int score;

public:
    doodle(){
    score=0;
    }

    void Game(){
        srand (time(0));
        RenderWindow app(VideoMode(400,533),"Doodle Game");
        app.setFramerateLimit(70);

        SoundBuffer d;
        if (!d.loadFromFile("canary.way")){
            cout<<"Sound Error "<<endl;
        }
        Sound s;
        s.setBuffer(d);
        s.play();
        s.setLoop(true);

        Texture t1,t2,t3;
        t1.loadFromFile("images/background4.jpg");
        t2.loadFromFile("images/platform.png" );
        t3.loadFromFile("images/doodle2.png");

        Sprite sBack(t1),splat(t2), sPers(t3);
        Point Plat[8];
        for (int i=0;i<8; i++){
            Plat[i].x=rand()%370;
            Plat[i].y=rand()%570;

        }
   int a=100 ,b=120,h=150;
   float da=0, db=0;

    while (app.isOpen()){

        Event e;
        while (app.pollEvent(e)){
            if (e.type==Event::Closed)
                app.close();

            }
        if (Keyboard::isKeyPressed(Keyboard::Right) )
            a   +=3;
        if (Keyboard::isKeyPressed(Keyboard::Left))
            a-=3 ;

        db+=0.1;
        b+=db;      //vertical movement control
        if (b>500)
            db=-10;
            if (b<h)
            for (int i=0; i<8;i++){
                b=h;
                Plat[i].y=Plat[i].y-db;
                if (Plat[i].y>500){
                    Plat[i].y=0;
                    Plat[i].x=rand()%350;
                }
            }
            for (int i=0; i<8;i++)
            if ((a+50>Plat[i].x)
            && (a+20<Plat[i].x+68)
            &&(b+70>Plat[i].y)
            &&(b+70<Plat[i].y+14)&&(db>0)
                       )
                       {
                           db=-10;
                           score++;
                       }

        sPers.setPosition(a,b);
            app.draw(sBack);
            app.draw(sPers);


            for (int i=0; i<8; i++){

                splat.setPosition(Plat[i].x,Plat[i].y );
            app.draw(splat);
            }
              Font arial ;
            arial.loadFromFile  ("arial.ttf");
            ostringstream  ssScore;
            ssScore<<"Score: "<<score;
            Text lblScore;
            lblScore.setCharacterSize(30);
            lblScore.setPosition(10,10) ;
            lblScore.setFont(arial);
            lblScore.setColor(Color::Red);
            lblScore.setString(ssScore.str());
            app.draw(lblScore);
            app.display();
    }
                s.stop();

    }
};
int main(){

doodle d;
d.Game();
}
