#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using namespace std ;
int main( int argc, char* args[] )
{
    SDL_Event e ;
    int x , y ;
    int s2 , s4 = 0 , h = 0 , s = 0;
    int a[4][4] ;
    a[0][0] = 1;a[0][1] = 2;a[0][2] = 6;a[0][3] = 8;
    a[1][0] = 4;a[1][1] = 3;a[1][2] = 7;a[1][3] = 5;
    a[2][0] = 1;a[2][1] = 5;a[2][2] = 8;a[2][3] = 4;
	a[3][0] = 6;a[3][1] = 2;a[3][2] = 3;a[3][3] = 7;
    int b1,b2,b3,b4;
    SDL_Init (SDL_INIT_VIDEO) ;
    bool t = true ;
    SDL_Window * w = SDL_CreateWindow("Group 3" , 0 , 0 , 800 , 600 , 0) ;
    SDL_Renderer * r = SDL_CreateRenderer(w , -1 , 0) ;
    SDL_Surface * per[16] = {IMG_Load ("0.jfif"),IMG_Load ("1.png") , IMG_Load ("2.png"), IMG_Load ("3.jfif"), IMG_Load ("4.png"), IMG_Load ("5.jfif"), IMG_Load ("6.jfif"), IMG_Load ("7.png"), IMG_Load ("8.jfif"), IMG_Load ("9.png"), IMG_Load ("10.png"), IMG_Load ("11.jfif"), IMG_Load ("12.png"), IMG_Load ("13.png"), IMG_Load ("14.png"), IMG_Load ("15.jfif")} ;
    SDL_Rect i_peraa = {0 , 0 , 800 , 600} ;
    SDL_Texture * per_saa = SDL_CreateTextureFromSurface (r , per[10]) ;
    SDL_RenderCopy(r , per_saa , NULL , &i_peraa) ;
    SDL_RenderPresent (r) ;
SDL_Delay(500);

    SDL_Rect i_perab = {0 , 0 , 800 , 600} ;
    SDL_Texture * per_sab = SDL_CreateTextureFromSurface (r , per[11]) ;
    SDL_RenderCopy(r , per_sab , NULL , &i_perab) ;
    SDL_RenderPresent (r) ;
SDL_Delay(500);

    SDL_Rect i_perac = {0 , 0 , 800 , 600} ;
    SDL_Texture * per_sac = SDL_CreateTextureFromSurface (r , per[12]) ;
    SDL_RenderCopy(r , per_sac , NULL , &i_perac) ;
    SDL_RenderPresent (r) ;
SDL_Delay(500);

    SDL_Rect i_perad = {0 , 0 , 800 , 600} ;
    SDL_Texture * per_sad = SDL_CreateTextureFromSurface (r , per[13]) ;
    SDL_RenderCopy(r , per_sad , NULL , &i_perad) ;
    SDL_RenderPresent (r) ;
SDL_Delay(500);

    SDL_Rect i_perae = {0 , 0 , 800 , 600} ;
    SDL_Texture * per_sae = SDL_CreateTextureFromSurface (r , per[14]) ;
    SDL_RenderCopy(r , per_sae , NULL , &i_perae) ;
    SDL_RenderPresent (r) ;
SDL_Delay(500);
//==============================================
    SDL_Rect i_pera = {0 , 0 , 100 , 100} ;
    SDL_Texture * per_sa = SDL_CreateTextureFromSurface (r , per[a[0][0]]) ;
    SDL_RenderCopy(r , per_sa , NULL , &i_pera) ;

    SDL_Rect i_per1a = {0 , 150 , 100 , 100} ;
    SDL_Texture * per_s1a = SDL_CreateTextureFromSurface (r , per[a[0][1]]) ;
    SDL_RenderCopy(r , per_s1a , NULL , &i_per1a) ;

    SDL_Rect i_per2a = {0 , 300 , 100 , 100} ;
    SDL_Texture * per_s2a = SDL_CreateTextureFromSurface (r , per[a[0][2]]) ;
    SDL_RenderCopy(r , per_s2a , NULL , &i_per2a) ;

    SDL_Rect i_per3a = {0 , 450 , 100 , 100} ;
    SDL_Texture * per_s3a = SDL_CreateTextureFromSurface (r , per[a[0][3]]) ;
    SDL_RenderCopy(r , per_s3a , NULL , &i_per3a) ;

    SDL_Rect i_per4a = {150 , 0 , 100 , 100} ;
    SDL_Texture * per_s4a = SDL_CreateTextureFromSurface (r , per[a[1][0]]) ;
    SDL_RenderCopy(r , per_s4a , NULL , &i_per4a) ;

    SDL_Rect i_per5a = {150 , 150 , 100 , 100} ;
    SDL_Texture * per_s5a = SDL_CreateTextureFromSurface (r , per[a[1][1]]) ;
    SDL_RenderCopy(r , per_s5a , NULL , &i_per5a) ;

    SDL_Rect i_per6a = {150 , 300 , 100 , 100} ;
    SDL_Texture * per_s6a = SDL_CreateTextureFromSurface (r , per[a[1][2]]) ;
    SDL_RenderCopy(r , per_s6a , NULL , &i_per6a) ;

    SDL_Rect i_per7a = {150 , 450 , 100 , 100} ;
    SDL_Texture * per_s7a = SDL_CreateTextureFromSurface (r , per[a[1][3]]) ;
    SDL_RenderCopy(r , per_s7a , NULL , &i_per7a) ;

    SDL_Rect i_per8a = {300 , 0 , 100 , 100} ;
    SDL_Texture * per_s8a = SDL_CreateTextureFromSurface (r , per[a[2][0]]) ;
    SDL_RenderCopy(r , per_s8a , NULL , &i_per8a) ;

    SDL_Rect i_per9a = {300 , 150 , 100 , 100} ;
    SDL_Texture * per_s9a = SDL_CreateTextureFromSurface (r , per[a[2][1]]) ;
    SDL_RenderCopy(r , per_s9a , NULL , &i_per9a) ;

    SDL_Rect i_per10a = {300 , 300 , 100 , 100} ;
    SDL_Texture * per_s10a = SDL_CreateTextureFromSurface (r , per[a[2][2]]) ;
    SDL_RenderCopy(r , per_s10a , NULL , &i_per10a) ;

    SDL_Rect i_per11a = {300 , 450 , 100 , 100} ;
    SDL_Texture * per_s11a = SDL_CreateTextureFromSurface (r , per[a[2][3]]) ;
    SDL_RenderCopy(r , per_s11a , NULL , &i_per11a) ;

    SDL_Rect i_per12a = {450 , 0 , 100 , 100} ;
    SDL_Texture * per_s12a = SDL_CreateTextureFromSurface (r , per[a[3][0]]) ;
    SDL_RenderCopy(r , per_s12a , NULL , &i_per12a) ;

    SDL_Rect i_per13a = {450 , 150 , 100 , 100} ;
    SDL_Texture * per_s13a = SDL_CreateTextureFromSurface (r , per[a[3][1]]) ;
    SDL_RenderCopy(r , per_s13a , NULL , &i_per13a) ;

    SDL_Rect i_per14a = {450 , 300 , 100 , 100} ;
    SDL_Texture * per_s14a = SDL_CreateTextureFromSurface (r , per[a[3][2]]) ;
    SDL_RenderCopy(r , per_s14a , NULL , &i_per14a) ;

    SDL_Rect i_per15a = {450 , 450 , 100 , 100} ;
    SDL_Texture * per_s15a = SDL_CreateTextureFromSurface (r , per[a[3][3]]) ;
    SDL_RenderCopy(r , per_s15a , NULL , &i_per15a) ;
SDL_RenderPresent (r) ;
SDL_Delay(3500);
//=========================================================
    SDL_Rect i_per = {0 , 0 , 100 , 100} ;
    SDL_Texture * per_s = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s , NULL , &i_per) ;

    SDL_Rect i_per1 = {0 , 150 , 100 , 100} ;
    SDL_Texture * per_s1 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s1 , NULL , &i_per1) ;

    SDL_Rect i_per2 = {0 , 300 , 100 , 100} ;
    SDL_Texture * per_s2 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s2 , NULL , &i_per2) ;

    SDL_Rect i_per3 = {0 , 450 , 100 , 100} ;
    SDL_Texture * per_s3 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s3 , NULL , &i_per3) ;

    SDL_Rect i_per4 = {150 , 0 , 100 , 100} ;
    SDL_Texture * per_s4 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s4 , NULL , &i_per4) ;

    SDL_Rect i_per5 = {150 , 150 , 100 , 100} ;
    SDL_Texture * per_s5 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s5 , NULL , &i_per5) ;

    SDL_Rect i_per6 = {150 , 300 , 100 , 100} ;
    SDL_Texture * per_s6 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s6 , NULL , &i_per6) ;

    SDL_Rect i_per7 = {150 , 450 , 100 , 100} ;
    SDL_Texture * per_s7 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s7 , NULL , &i_per7) ;

    SDL_Rect i_per8 = {300 , 0 , 100 , 100} ;
    SDL_Texture * per_s8 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s8 , NULL , &i_per8) ;

    SDL_Rect i_per9 = {300 , 150 , 100 , 100} ;
    SDL_Texture * per_s9 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s9 , NULL , &i_per9) ;

    SDL_Rect i_per10 = {300 , 300 , 100 , 100} ;
    SDL_Texture * per_s10 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s10 , NULL , &i_per10) ;

    SDL_Rect i_per11 = {300 , 450 , 100 , 100} ;
    SDL_Texture * per_s11 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s11 , NULL , &i_per11) ;

    SDL_Rect i_per12 = {450 , 0 , 100 , 100} ;
    SDL_Texture * per_s12 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s12 , NULL , &i_per12) ;

    SDL_Rect i_per13 = {450 , 150 , 100 , 100} ;
    SDL_Texture * per_s13 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s13 , NULL , &i_per13) ;

    SDL_Rect i_per14 = {450 , 300 , 100 , 100} ;
    SDL_Texture * per_s14 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s14 , NULL , &i_per14) ;

    SDL_Rect i_per15 = {450 , 450 , 100 , 100} ;
    SDL_Texture * per_s15 = SDL_CreateTextureFromSurface (r , per[0]) ;
    SDL_RenderCopy(r , per_s15 , NULL , &i_per15) ;

    SDL_Rect i_per15aa = {600 , 500 , 200 , 100} ;
    SDL_Texture * per_s15aa = SDL_CreateTextureFromSurface (r , per[15]) ;
    SDL_RenderCopy(r , per_s15aa , NULL , &i_per15aa) ;
    while (t)
    {
        Uint8 SDL_GetMouseState(int *x, int *y);
        SDL_WaitEvent (&e) ;
        while(SDL_PollEvent( &e ) != 0)
        {
            if( e.type == SDL_QUIT )
                t = false ;
            if (e.type == SDL_MOUSEBUTTONDOWN&&h == 0){
                if (x > 0 && x < 100 && y > 0 && y < 100){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per = {0 , 0 , 100 , 100} ;
                        SDL_Texture * per_s = SDL_CreateTextureFromSurface (r , per[1]) ;
                        SDL_RenderCopy(r , per_s , NULL , &i_per) ;
                        s++;
                        s2 = 1;
                        if (s == 1){b1 = 0 ; b2 = 0;}
                        if (s == 2){b3 = 0; b4 = 0;}
                        }
                    }
                if (x > 0 && x < 100 && y > 150 && y < 250){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per1 = {0 , 150 , 100 , 100} ;
                        SDL_Texture * per_s1 = SDL_CreateTextureFromSurface (r , per[2]) ;
                        SDL_RenderCopy(r , per_s1 , NULL , &i_per1) ;s++;
                        s2 = 2;
                        if (s == 1){b1 = 0 ; b2 = 1;}
                        if (s == 2){b3 = 0; b4 = 1;}
                    }
                }
                if (x > 0 && x < 100 && y > 300 && y < 400){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per2 = {0 , 300 , 100 , 100} ;
                        SDL_Texture * per_s2 = SDL_CreateTextureFromSurface (r , per[6]) ;
                        SDL_RenderCopy(r , per_s2 , NULL , &i_per2) ;s++;
                        s2 = 6;
                        if (s == 1){b1 = 0 ; b2 = 2;}
                        if (s == 2){b3 = 0; b4 = 2;}
                    }
                }
                if (x > 0 && x < 100 && y > 450 && y < 550){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per3 = {0 , 450 , 100 , 100} ;
                        SDL_Texture * per_s3 = SDL_CreateTextureFromSurface (r , per[8]) ;
                        SDL_RenderCopy(r , per_s3 , NULL , &i_per3) ;
                        s++;
                        s2 = 8;
                        if (s == 1){b1 = 0 ; b2 = 3;}
                        if (s == 2){b3 = 0; b4 = 3;}
                    }
                }

                if (x > 150 && x < 250 && y > 0 && y < 100){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per4 = {150 , 0 , 100 , 100} ;
                        SDL_Texture * per_s4 = SDL_CreateTextureFromSurface (r , per[4]) ;
                        SDL_RenderCopy(r , per_s4 , NULL , &i_per4) ;
                        s++;
                        s2 = 4;
                        if (s == 1){b1 = 1; b2 = 0;}
                        if (s == 2){b3 = 1; b4 = 0;}
                    }
                }
                if (x > 150 && x < 250 && y > 150 && y < 250){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per5 = {150 , 150 , 100 , 100} ;
                        SDL_Texture * per_s5 = SDL_CreateTextureFromSurface (r , per[3]) ;
                        SDL_RenderCopy(r , per_s5 , NULL , &i_per5) ;
                        s++;
                        s2 = 3;
                        if (s == 1){b1 = 1 ; b2 = 1;}
                        if (s == 2){b3 = 1; b4 = 1;}
                    }
                }
                if (x > 150 && x < 250 && y > 300 && y < 400){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per6 = {150 , 300 , 100 , 100} ;
                        SDL_Texture * per_s6 = SDL_CreateTextureFromSurface (r , per[7]) ;
                        SDL_RenderCopy(r , per_s6 , NULL , &i_per6) ;
                        s++;
                        s2 = 7;
                        if (s == 1){b1 = 1 ; b2 = 2;}
                        if (s == 2){b3 = 1; b4 = 2;}
                    }
                }
                if (x > 150 && x < 250 && y > 450 && y < 550){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per7 = {150 , 450 , 100 , 100} ;
                        SDL_Texture * per_s7 = SDL_CreateTextureFromSurface (r , per[5]) ;
                        SDL_RenderCopy(r , per_s7 , NULL , &i_per7) ;
                        s++;
                        s2 = 5;
                        if (s == 1){b1 = 1 ; b2 = 3;}
                        if (s == 2){b3 = 1; b4 = 3;}
                    }
                }

                if (x > 300 && x < 400 && y > 0 && y < 100){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per8 = {300 , 0 , 100 , 100} ;
                        SDL_Texture * per_s8 = SDL_CreateTextureFromSurface (r , per[1]) ;
                        SDL_RenderCopy(r , per_s8 , NULL , &i_per8) ;
                        s++;
                        s2 = 1;
                        if (s == 1){b1 = 2 ; b2 = 0;}
                        if (s == 2){b3 = 2; b4 = 0;}
                    }
                }
                if (x > 300 && x < 400 && y > 150 && y < 250){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per9 = {300 , 150 , 100 , 100} ;
                        SDL_Texture * per_s9 = SDL_CreateTextureFromSurface (r , per[5]) ;
                        SDL_RenderCopy(r , per_s9 , NULL , &i_per9) ;
                        s++;
                        s2 = 5;
                        if (s == 1){b1 = 2 ; b2 = 1;}
                        if (s == 2){b3 = 2; b4 = 1;}
                    }
                }
                if (x > 300 && x < 400 && y > 300 && y < 400){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per10 = {300 , 300 , 100 , 100} ;
                        SDL_Texture * per_s10 = SDL_CreateTextureFromSurface (r , per[8]) ;
                        SDL_RenderCopy(r , per_s10 , NULL , &i_per10) ;
                        s++;
                        s2 = 8;
                        if (s == 1){b1 = 2 ; b2 = 2;}
                        if (s == 2){b3 = 2; b4 = 2;}
                    }
                }
                if (x > 300 && x < 400 && y > 450 && y < 550){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per11 = {300 , 450 , 100 , 100} ;
                        SDL_Texture * per_s11 = SDL_CreateTextureFromSurface (r , per[4]) ;
                        SDL_RenderCopy(r , per_s11 , NULL , &i_per11) ;
                        s++;
                        s2 = 4;
                        if (s == 1){b1 = 2 ; b2 = 3;}
                        if (s == 2){b3 = 2; b4 = 3;}
                    }
                }

                if (x > 450 && x < 550 && y > 0 && y < 100){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per12 = {450 , 0 , 100 , 100} ;
                        SDL_Texture * per_s12 = SDL_CreateTextureFromSurface (r , per[6]) ;
                        SDL_RenderCopy(r , per_s12 , NULL , &i_per12) ;
                        s++;
                        s2 = 6;
                        if (s == 1){b1 = 3 ; b2 = 0;}
                        if (s == 2){b3 = 3; b4 = 0;}
                    }
                }
                if (x > 450 && x < 550 && y > 150 && y < 250){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per13 = {450 , 150 , 100 , 100} ;
                        SDL_Texture * per_s13 = SDL_CreateTextureFromSurface (r , per[2]) ;
                        SDL_RenderCopy(r , per_s13 , NULL , &i_per13) ;
                        s++;
                        s2 = 2;
                        if (s == 1){b1 = 3 ; b2 = 1;}
                        if (s == 2){b3 = 3; b4 = 1;}
                    }
                }
                if (x > 450 && x < 550 && y > 300 && y < 400){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per14 = {450 , 300 , 100 , 100} ;
                        SDL_Texture * per_s14 = SDL_CreateTextureFromSurface (r , per[3]) ;
                        SDL_RenderCopy(r , per_s14 , NULL , &i_per14) ;
                        s++;
                        s2 = 3;
                        if (s == 1){b1 = 3 ; b2 = 2;}
                        if (s == 2){b3 = 3; b4 = 2;}
                    }
                }
                if (x > 450 && x < 550 && y > 450 && y < 550){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){
                        SDL_Rect i_per15 = {450 , 450 , 100 , 100} ;
                        SDL_Texture * per_s15 = SDL_CreateTextureFromSurface (r , per[7]) ;
                        SDL_RenderCopy(r , per_s15 , NULL , &i_per15) ;
                        s++;
                        s2 = 7;
                        if (s == 1){b1 = 3 ; b2 = 3;}
                        if (s == 2){b3 =3; b4 = 3;}
                    }
                }
                if (x > 600 && x < 800 && y > 500 && y < 600){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){return 0 ;}
                }

            }
            if (x > 600 && x < 800 && y > 500 && y < 600){
                    if (e.type == SDL_MOUSEBUTTONDOWN && s <= 2){return 0 ;}
                }
        }
        s%=3;
        SDL_GetGlobalMouseState(&x,&y);
        if (s==2){
            if (a[b1][b2]!=a[b3][b4]){
                SDL_RenderPresent (r) ;
                SDL_Delay(750);
                SDL_Rect i_per21 = {b1*100+(b1)*50 , b2*100+(b2)*50 , 100 , 100} ;
                SDL_Texture * per_s21 = SDL_CreateTextureFromSurface (r , per[0]) ;
                SDL_RenderCopy(r , per_s21 , NULL , &i_per21) ;
                SDL_Rect i_per20 = {b3*100+(b3)*50 , b4*100+(b4)*50 , 100 , 100} ;
                SDL_Texture * per_s20 = SDL_CreateTextureFromSurface (r , per[0]) ;
                SDL_RenderCopy(r , per_s20 , NULL , &i_per20) ;
                s = 0 ;
                }
            else{s4++;}
        }
        if(s4 == 8){
            SDL_Rect i_per20c = {600 , 100 , 200 , 200} ;
            SDL_Texture * per_s20c = SDL_CreateTextureFromSurface (r , per[9]) ;
            SDL_RenderCopy(r , per_s20c , NULL , &i_per20c) ;
            h = 1;
        }
        s%=3;
        if (s == 2){s=0;}
        SDL_RenderPresent (r) ;
        SDL_Delay (20) ;
    }
    for (int j=0 ; j <=10 ; j++)
        SDL_FreeSurface(per[j]);
    SDL_DestroyRenderer(r);
    SDL_DestroyWindow(w);
    SDL_Quit();
    return 0;
}
