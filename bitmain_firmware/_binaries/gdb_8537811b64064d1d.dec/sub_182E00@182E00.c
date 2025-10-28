int __fastcall sub_182E00(_BYTE *a1)
{
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r0
  _DWORD *v5; // r2
  int v6; // r4
  int v7; // r3
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _BYTE v12[28]; // [sp+0h] [bp-1Ch] BYREF

  if ( !a1 || !*a1 )
    sub_94708("Requires argument (inferior id(s) to kill)", a1);
  v1 = sub_5AE1C((int)v12, (int)a1);
  while ( !v12[0] )
  {
    while ( 1 )
    {
      v4 = sub_5AE5C((int)v12, v2, v3);
      v5 = (_DWORD *)dword_487918;
      v6 = v4;
      if ( dword_487918 )
        break;
LABEL_10:
      v1 = sub_946D8("Inferior ID %d not known.", v4);
      if ( v12[0] )
        return sub_2A8F8C(v1);
    }
    if ( v4 != *(_DWORD *)(dword_487918 + 8) )
    {
      v7 = dword_487918;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( !v7 )
          goto LABEL_10;
        if ( v4 == *(_DWORD *)(v7 + 8) )
        {
          while ( 1 )
          {
            v5 = (_DWORD *)v5[1];
            if ( !v5 )
              break;
            if ( v4 == v5[2] )
              goto LABEL_17;
          }
          v9 = -1;
          goto LABEL_15;
        }
      }
    }
LABEL_17:
    v9 = v5[3];
    if ( v9 )
    {
LABEL_15:
      v10 = (_DWORD *)((int (__fastcall *)(int))loc_23E758)(v9);
      if ( v10 )
      {
        v11 = sub_23FA18(v10[2], v10[3], v10[4]);
        v1 = sub_22EF3C(v11);
      }
      else
      {
        v1 = sub_946D8("Inferior ID %d has no threads.", v6);
      }
    }
    else
    {
      v1 = sub_946D8("Inferior ID %d is not running.", v6);
    }
  }
  return sub_2A8F8C(v1);
}
