int __fastcall sub_22F200(int a1, int a2)
{
  int v4; // r0
  void *v5; // r6
  int v6; // r0
  int v7; // r0
  int v9; // [sp+8h] [bp-40h]
  int v10; // [sp+Ch] [bp-3Ch]
  __int64 v11; // [sp+10h] [bp-38h]

  v4 = sub_16F67C(a1);
  if ( !((int (__fastcall *)(int))loc_169834)(v4) )
    sub_94708("Cannot find thread-local variables on this target");
  v10 = dword_4878EC;
  v11 = qword_4878F0;
  v5 = sub_92E50();
  v6 = sub_16F67C((int)v5);
  v7 = ((int (__fastcall *)(int, int))loc_169880)(v6, a1);
  v9 = off_489B20(&dword_4899A0, v10, v11, HIDWORD(v11), v7, a2, 0);
  sub_92E68((int)v5);
  return v9;
}
