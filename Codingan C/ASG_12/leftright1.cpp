#include<stdio.h>

int lef(int arr[], int l, int r, int x){
    int ans=-1;
    while (r>=l) {
        int mid = (l+r) / 2;
        if (arr[mid] < x) {
            l = mid + 1;
        } else if (arr[mid] > x) {
            r = mid - 1;
        } else {
            ans = mid;
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	int aN[n],aM[m],a;
	int lt[m], rt[m];
	for(int z=0; z<n; z++){
		scanf("%d", &aN[z]);
		getchar();
	}
	for(int x=0; x<m; x++){
		scanf("%d", &aM[x]);
		getchar();
	}
	for(int c=0; c<m; c++){
		a=aM[c];
		lt[c] = lef(aN, 0, n-1, a);
		rt[c] = rght(aN, 0, n-1, a);
		if(lt[c]==-1 && rt[c]==-1){
			printf("-1 -1\n");
		} else {
			printf("%d %d\n", lt[c]+1, rt[c]+1);
		}
	}
	return 0;
}
