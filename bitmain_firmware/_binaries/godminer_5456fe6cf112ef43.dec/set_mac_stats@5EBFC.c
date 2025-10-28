int __fastcall set_mac_stats(int a1)
{
  char *v2; // r4
  __int16 v3; // r1
  __int16 v4; // t1
  int v6; // [sp+4h] [bp-4h] BYREF
  char vars0; // [sp+8h] [bp+0h] BYREF

  v2 = (char *)&v6 + 1;
  v3 = 149;
  v6 = -1734895979;
  while ( 1 )
  {
    sub_5C1C0(a1, v3, 0);
    if ( v2 == &vars0 )
      break;
    v4 = (unsigned __int8)*v2++;
    v3 = v4;
  }
  return 0;
}
