void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = printf("monitor-ipsig compile %s--%s\n", "Mar 13 2023", "21:00:08");
  v4 = sub_10FE4(v3);
  while ( 1 )
  {
    if ( sub_114A4(v4) != 1 )
    {
      do
        v5 = usleep(0x61A80u);
      while ( sub_114A4(v5) != 1 );
    }
    do
    {
      v6 = puts("Key Down!!!!!");
      v7 = sub_110E8(v6);
      v4 = sub_11270(v7);
    }
    while ( v4 != 1 );
  }
}
