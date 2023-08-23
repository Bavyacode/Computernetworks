int main()
{
    int i,w,f,frames[50];
    printf("Enter the size of the window: ");
    scanf("%d",&w);
    printf("\nEnter the number of frames: ");
    scanf("%d",&f);
    printf("\nEnter the %d frames: ",f);
    for(i=1;i<=f;i++)
    {
        scanf("%d", &frames[i]);
    }
    printf("\nWith sliding window protocol, the frames will be sent in the following manner(assuming no corruption of frames) ");
    printf("\n\nAfter sending the %d frames at each stage sender waits for the acknowlegement sent by the receiver\n",w);
    
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {
            printf("%d\n",frames[i]);
            printf("\nAcknowledgement of above frames sent is received by the sender ");
        }
        else
        {
            printf("%d ",frames[i]);
        }
    }
    if(f%w!=0)
        printf("\nAcknowledgement of above frames sent is received by sender\n");
    return 0;
}
