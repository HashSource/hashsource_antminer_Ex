int __fastcall sub_182F28(_BYTE *a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r4
  int v9; // r3
  int v10; // r0
  _DWORD *v11; // r0
  _BYTE v12[24]; // [sp+0h] [bp-18h] BYREF

  if ( !a1 || !*a1 )
    sub_94708("Requires argument (inferior id(s) to detach)");
  result = sub_5AE1C((int)v12, (int)a1);
  while ( !v12[0] )
  {
    while ( 1 )
    {
      v6 = sub_5AE5C((int)v12, v4, v5);
      v7 = (_DWORD *)dword_487918;
      v8 = v6;
      if ( dword_487918 )
        break;
LABEL_10:
      result = sub_946D8("Inferior ID %d not known.", v6);
      if ( v12[0] )
        return result;
    }
    if ( v6 != *(_DWORD *)(dword_487918 + 8) )
    {
      v9 = dword_487918;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v9 + 4);
        if ( !v9 )
          goto LABEL_10;
        if ( v6 == *(_DWORD *)(v9 + 8) )
        {
          while ( 1 )
          {
            v7 = (_DWORD *)v7[1];
            if ( !v7 )
              break;
            if ( v6 == v7[2] )
              goto LABEL_17;
          }
          v10 = -1;
          goto LABEL_15;
        }
      }
    }
LABEL_17:
    v10 = v7[3];
    if ( v10 )
    {
LABEL_15:
      v11 = (_DWORD *)((int (__fastcall *)(int))loc_23E758)(v10);
      if ( v11 )
      {
        sub_23FA18(v11[2], v11[3], v11[4]);
        result = sub_17ECD0(0, a2);
      }
      else
      {
        result = sub_946D8("Inferior ID %d has no threads.", v8);
      }
    }
    else
    {
      result = sub_946D8("Inferior ID %d is not running.", v8);
    }
  }
  return result;
}
