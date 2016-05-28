    int n,q;

    scanf("%d %d",&n,&q);

    int i,j,n1;
    int a[10000][10000];

    for(i = 0; i < n; i++) {
        scanf("%d",&n1);
        for(j = 0; j < n1 ; j ++) {
            scanf("%d",&a[i][j]);
        }
    }
        
    int x,y;

    for(i = 0; i < q; i ++) {
        scanf("%d %d",&x,&y);
        
        printf("%d\n",a[x][y]);
    }
        
	return 0;
}
