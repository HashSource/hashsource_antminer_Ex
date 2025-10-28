int *__fastcall sub_21D914(int *a1, int a2, char *a3, _DWORD *a4, int a5)
{
  int *v9; // r0
  int v10; // r2
  int v12; // r1
  int v13; // r0
  int v14[3]; // [sp+0h] [bp-Ch] BYREF

  v9 = sub_21CFDC(v14, a3, (int)a4, a5);
  if ( v14[0] )
  {
    v10 = v14[1];
    *a1 = v14[0];
    a1[1] = v10;
    return a1;
  }
  else if ( a5 == 1
         && (!a4 ? (v12 = sub_16F67C((int)v9)) : (v12 = sub_C2364(a4)),
             (v13 = ((int (__fastcall *)(int, int, char *))loc_194734)(a2, v12, a3)) != 0) )
  {
    *a1 = v13;
    a1[1] = 0;
    return a1;
  }
  else
  {
    sub_21D748((int)a1, a3, (int)a4, a5);
    return a1;
  }
}
