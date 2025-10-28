void __fastcall sub_1EDA5C(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  char *v7; // r5
  int v8; // r0
  char *v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r0

  v4 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v4);
  v5 = dword_488C94;
  v6 = ((int (__fastcall *)(int))loc_1E21C0)(5);
  if ( v6 == 2 )
  {
    sub_1AE904();
  }
  else
  {
    v7 = *(char **)v5;
    v8 = sub_1E28B8(v6);
    v9 = &v7[v8];
    v10 = sub_16F67C(v8);
    if ( !((int (__fastcall *)(int))loc_16D924)(v10) )
      sub_1E8344(0);
    *v7 = 122;
    v7[1] = 48;
    v7[2] = 44;
    v11 = sub_1E1CA8(*(_DWORD *)(a3 + 4));
    v12 = sub_1E0F9C((int)(v7 + 3), (unsigned int)v11);
    sub_93198(&v7[v12 + 3], v9 - &v7[v12 + 3], ",%d", *(_DWORD *)(a3 + 36));
    sub_1E7E14(*(const char **)v5);
    sub_1E4EE0((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
  }
}
