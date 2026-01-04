int check_args (char *argv[])
{
    int i ;
    int a = 1;
    char c;
    while(argv[a])
    {
        i = 0;
        
        while (argv[a][i])
        {
            c = argv[a][i];

            if(!(c <= '9' && c >= '0'))
            return 0;
            
            i++;
        }
        a++;
    }
}