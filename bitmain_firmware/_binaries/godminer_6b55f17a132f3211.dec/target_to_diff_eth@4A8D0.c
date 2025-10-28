int __fastcall target_to_diff_eth(int a1)
{
  int v1; // r1
  int v2; // lr
  int v3; // r3
  int v4; // r12
  int v5; // t1
  int v6; // r2

  v1 = 0;
  v2 = a1 - 1;
  do
  {
    v3 = 7;
    v5 = *(unsigned __int8 *)++v2;
    v4 = v5;
    do
    {
      v6 = v4 >> v3--;
      if ( (v6 & 1) != 0 )
        break;
      v1 = (unsigned __int8)(v1 + 1);
    }
    while ( v3 != -1 );
  }
  while ( v2 != a1 + 31 );
  return v1;
}
