int __fastcall sub_1E6570(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r5
  void *v9; // [sp+8h] [bp-Ch] BYREF
  int v10; // [sp+Ch] [bp-8h] BYREF

  v5 = sub_16F67C(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2798)(v5);
  v7 = (_DWORD *)dword_488C94;
  v9 = *(void **)dword_488C94;
  v10 = sub_1E28B8(v6) - 1;
  sub_1E27E4(a2);
  sub_1E16BC(&v9, &v10, "vFile:close:");
  sub_1E132C((int *)&v9, &v10, a2);
  return sub_1E6058((int)v9 - *v7, 14, a3, 0, 0);
}
