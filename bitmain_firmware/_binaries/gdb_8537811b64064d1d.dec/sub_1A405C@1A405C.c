void __noreturn sub_1A405C()
{
  int v0; // r4
  int v1; // r3
  int v2; // r0
  void *v3; // r0

  v0 = dword_487668;
  v1 = *(_DWORD *)(dword_487668 + 68);
  *(_DWORD *)(dword_487668 + 36) = 1;
  if ( v1 )
  {
    v2 = sub_191AE8();
    ((void (__fastcall *)(int))loc_1917B4)(v2);
  }
  sub_152CAC();
  v3 = sub_9263C();
  sub_92648(v3);
  sub_4EFF4(0, *(_DWORD *)(v0 + 48) == *(_DWORD *)(v0 + 44));
}
