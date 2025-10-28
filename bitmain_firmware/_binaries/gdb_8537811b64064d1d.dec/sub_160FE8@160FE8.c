int __fastcall sub_160FE8(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v7; // r4
  int v8; // r10
  int v9; // r0
  int v10; // r6
  _BYTE *v11; // r7
  int v12; // r0
  int v13; // r3

  v7 = sub_15DB68(a1);
  v8 = ((int (*)(void))loc_165BE0)();
  v9 = ((int (__fastcall *)(int, int))loc_1DD3DC)(v7, a2);
  v10 = sub_260DE4(v9);
  v11 = (_BYTE *)sub_26E97C(v10);
  v12 = ((int (__fastcall *)(int, int))loc_1DD448)(v7, a2);
  sub_15C374(v11, v12, v8, v13, a3, a4);
  return v10;
}
