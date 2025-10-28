int __fastcall sub_161058(int *a1, int a2, const void *a3)
{
  int v5; // r8
  int v6; // r0
  int v7; // r5
  int v8; // r1
  void *v9; // r6
  size_t v10; // r0

  v5 = sub_15DB68(a1);
  v6 = ((int (__fastcall *)(int, int))loc_1DD3DC)(v5, a2);
  v7 = sub_260DE4(v6);
  v9 = (void *)sub_26BCE0(v7, v8);
  v10 = ((int (__fastcall *)(int, int))loc_1DD448)(v5, a2);
  memcpy(v9, a3, v10);
  return v7;
}
