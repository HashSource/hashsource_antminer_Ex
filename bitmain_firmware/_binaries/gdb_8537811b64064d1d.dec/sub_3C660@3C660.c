int __fastcall sub_3C660(int a1, int a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r6
  int v10; // r5
  _DWORD v12[3]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v13[16]; // [sp+1Ch] [bp-10h] BYREF

  v8 = sub_22F180();
  v9 = sub_92564(nullsub_39, 0);
  if ( !v8 )
  {
    sub_231BA0(a1);
    sub_2589C0(a1);
  }
  v10 = sub_3DD20(a2, a3, a4, sub_3C72C, 0, 0, 0, 0);
  sub_98F78(v12, v10);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_23FAB4)(v12[0], v12[1], v12[2]);
  sub_92668(v9);
  sub_3D2B4(v13, v10, 1);
  return off_489A68();
}
