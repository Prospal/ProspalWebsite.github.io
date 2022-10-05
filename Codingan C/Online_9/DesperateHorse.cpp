#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int DPS[8][8];

int min(int a, int b){
	if(a < b) {
       return a;
   }
   return b;
}

int solusi(int sr, int sc, int fr, int fc){
	if (sr == fr && sc == fc)
		return DPS[0][0];
	else {
		if (DPS[abs(sr - fr)][abs(sc - fc)] != 0)
			return DPS[abs(sr - fr)][abs(sc - fc)];
		else {
			int x1, y1, x2, y2;
			if (sr <= fr) {
				if (sc <= fc) {
					x1 = sr + 2;
					y1 = sc + 1;
					x2 = sr + 1;
					y2 = sc + 2;
				} else {
					x1 = sr + 2;
					y1 = sc - 1;
					x2 = sr + 1;
					y2 = sc - 2;
				}
			} else {
				if (sc <= fc) {
					x1 = sr - 2;
					y1 = sc + 1;
					x2 = sr - 1;
					y2 = sc + 2;
				} else {
					x1 = sr - 2;
					y1 = sc - 1;
					x2 = sr - 1;
					y2 = sc - 2;
				}
			}
			DPS[abs(sr - fr)][abs(sc - fc)] = min(solusi(x1, y1, fr, fc), solusi(x2, y2, fr, fc)) + 1;
			DPS[abs(sc - fc)][abs(sr - fr)] = DPS[abs(sr - fr)][abs(sc- fc)];
			return DPS[abs(sr - fr)][abs(sc - fc)];
		}
	}
}
int main() {
   int tc, j, jaw;
   scanf("%d", &tc);
   j = 1;
   while(tc--) {
       char start[3], final[3];
       scanf("%s %s", start, final);
       int sc = start[1]-'0';
       int sr = start[0]-'A'+1;
       int fc = final[1]-'0';
       int fr = final[0]-'A'+1;
       if ((sr == 1 && sc == 1 && fr == 2 && fc == 2) || (sr == 2 && sc == 2 && fr == 1 && fc == 1))
	   		jaw = 4;
   		else if ((sr == 1 && sc == 8 && fr == 2 && fc == 7) || (sr == 2 && sc == 7 && fr == 1 && fc == 8))
   			jaw = 4;
   		else if ((sr == 8 && sc == 1 && fr == 7 && fc == 2) || (sr == 7 && sc == 2 && fr == 8 && fc == 1))
   			jaw = 4;
   		else if ((sr == 8 && sc == 8 && fr == 7 && fc == 7) || (sr == 7 && sc == 7 && fr == 8 && fc == 8))
   			jaw = 4;
   		else {
           for(int i = 0; i < 8; i++) {
               for(int j = 0; j < 8; j++) {
                   DPS[i][j] = 0;
               }
           }
	   DPS[1][0] = 3;
	   DPS[0][1] = 3;
	   DPS[1][1] = 2;
	   DPS[2][0] = 2;
	   DPS[0][2] = 2;
	   DPS[2][1] = 1;
	   DPS[1][2] = 1;
	   jaw = solusi(sr, sc, fr, fc);
	   }
       printf("Case #%d: %d\n", j, jaw);
       j++;
   }
}
