int __fastcall sub_17FFFC(int a1, int a2)
{
  int v4; // r0
  void *v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v10; // r0

  v4 = sub_22F070(a1);
  ((void (__fastcall *)(int))loc_235A24)(v4);
  dword_4878F8 = 0;
  v5 = sub_92E50();
  v6 = sub_1DDBE4(v5);
  dword_4878F8 = sub_1DFB64(v6);
  sub_92E68((int)v5);
  if ( *(_DWORD *)(dword_487D2C + 8) )
  {
    v7 = *(_DWORD *)(dword_487D2C + 52);
    v8 = sub_201A78(a2);
    if ( *(_DWORD *)(dword_487D2C + 52) == v7 )
    {
      if ( dword_48A514 )
        v8 = sub_946D8("platform-specific solib_create_inferior_hook did not load initial shared libraries.");
      v10 = sub_16F67C(v8);
      if ( !((int (__fastcall *)(int))loc_16D8AC)(v10) )
        sub_20168C(0, 0, dword_46DBA8);
    }
  }
  sub_DC44C();
  return sub_1B93B8(a1, a2);
}
