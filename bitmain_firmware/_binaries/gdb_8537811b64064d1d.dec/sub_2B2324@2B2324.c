int __fastcall sub_2B2324(_DWORD *a1)
{
  _BYTE v3[4]; // [sp+Ch] [bp-4h] BYREF

  if ( !dword_48FD0C )
    sub_2B1DE0();
  if ( sub_2A8A2C((int)a1, 0, 0) )
    return 0;
  if ( sub_2A8800((int)v3, 4u, (int)a1) != 4 )
    return 0;
  if ( v3[0] != 37 )
    return 0;
  if ( aCccccccccccccc[v3[1]] == 99 )
    return 0;
  if ( aCccccccccccccc[v3[2]] == 99 )
    return 0;
  if ( aCccccccccccccc[v3[3]] == 99 )
    return 0;
  sub_2B17AC((int)a1);
  if ( !sub_2B2210(a1) )
    return 0;
  else
    return a1[1];
}
