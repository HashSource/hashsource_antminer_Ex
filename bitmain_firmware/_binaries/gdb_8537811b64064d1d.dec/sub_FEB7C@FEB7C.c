_DWORD *__fastcall sub_FEB7C(_DWORD *a1, int a2, _DWORD *a3)
{
  void *v5; // r5
  unsigned int *i; // r1
  unsigned int v7; // r3
  bool v9; // cc
  _DWORD *v10; // [sp+0h] [bp-8h] BYREF
  _DWORD *v11; // [sp+4h] [bp-4h] BYREF

  if ( a2 && (sub_7F674(&v11, a2, 0), (v5 = v11) != 0) )
  {
    for ( i = (unsigned int *)v11[1]; ; i = (unsigned int *)i[2] )
    {
      v7 = *i;
      if ( *i < 0x19 || v7 > 0x1E && v7 != 33 )
        break;
    }
    if ( v7 == 3 )
    {
      sub_7F58C(&v10, i[2], 10);
      a3 = v10;
    }
    else if ( a3 )
    {
      a3 = 0;
    }
    else
    {
      v9 = v7 > 4;
      if ( v7 != 4 )
        v9 = v7 > 1;
      if ( !v9 )
      {
        sub_7F58C(&v11, (int)i, 10);
        a3 = v11;
      }
    }
    *a1 = a3;
    sub_7F5F8((int)v5);
    sub_33AC2C(v5);
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
