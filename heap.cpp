#include <cstdio>
#define FIN "heap.in"
#define FOUT "heap.out"
#define MAX 200005

using namespace std;

int HEAP[ MAX ];
int n, len;
int PosInd[ MAX ], 
    IndPos[ MAX ];

void swap(int x, int y) {

     int xo;
     xo = HEAP[x]^HEAP[y];
     HEAP[x] = xo^HEAP[x]; 
     HEAP[y] = xo^HEAP[y];

     xo = IndPos[ x ] ^ IndPos[ y ];
          IndPos[ x ] = xo ^ IndPos[ x ];
          IndPos[ y ] = xo ^ IndPos[ y ];

     xo = PosInd[ IndPos[ x ] ] ^      PosInd[ IndPos[ y ] ];
          PosInd[ IndPos[ x ] ] = xo ^ PosInd[ IndPos[ x ] ];
          PosInd[ IndPos[ y ] ] = xo ^ PosInd[ IndPos[ y ] ];
}

void up(int c) {

     int p;

     p = c / 2;

     while( p ) {

            if(HEAP[ p ] > HEAP[ c ]) {

               swap(p, c);

               c = p;

               p = c / 2;
  
            } else 

              break;
     }
};

void insert(int elem, int pos) {

     HEAP[ ++len ] = elem;

     PosInd[ pos ] = len;

     IndPos[ len ] = pos;
 
     up( len ); 
};

void down(int p) {

     int c;

     c = 2 * p;

     while( c <= len) {

            if( c < len && HEAP[ c + 1 ] < HEAP[ c ] )  c++;

            if( HEAP[ p ] > HEAP[ c ] ) {

                swap( p, c );

                p = c;

                c = 2 * p; 
   
            } else break;
     } 

};

void remove(int which) {

     int aux = PosInd[ which ];

     swap(aux, len); 

     len--;

     down( aux );
} 

void readAndSolve() {

     int opt, 
           x, 
           ind = 0;

     freopen(FIN, "r", stdin);
     freopen(FOUT, "w", stdout);

     scanf("%d", &n);

     for(; n; --n) {

             scanf("%d", &opt);

             switch( opt ) {

                    case 1: 
                    scanf("%d", &x);
                    insert(x, ++ind);
                    break; 
 
                    case 2:
                    scanf("%d", &x);
                    remove( x );
                    break;
 
                    case 3:
                    printf("%d\n", HEAP[ 1 ] );     
                    break; 
             };        
     }

     fclose( stdin );
     fclose( stdout );
}

int main() {

    readAndSolve(); 

    return(0); 
}
