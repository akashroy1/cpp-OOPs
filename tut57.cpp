/*  Virtual Function Example 

    Rules for Virtual Function

        1. They can't be static.
        2. They are accessed by pointer objects.
        3. Virtual Function can be a friend of another class.
        4. A vitual function in base class might not ne used.
        5. If a virtual functiion defined in the base class, there is no nesesity of redefining it in derived class
*/
#include <iostream>
#include <string.h>
using namespace std;

class CWH {
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};
class CWHVideo: public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"The tittle of the video is "<<title<<endl;
            cout<<"The rating of the video is "<<rating<<endl;
            cout<<"The length of the video is "<<videoLength<<endl;
        }
};
class CWHText: public CWH{
    int wordLength;
    public:
        CWHText(string s, float r, int wl): CWH(s, r){
            wordLength = wl;
        }
        void display(){
            cout<<"The tittle of the blog is "<<title<<endl;
            cout<<"The rating of the blog is "<<rating<<endl;
            cout<<"The Number of words of the blog is "<<wordLength<<endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo (title, rating, vlen);    
    djVideo.display();

    title = "Django Tutorial Text";
    vlen = 433;
    rating = 4.89;
    CWHText djText (title, rating, vlen);    
    djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}
