bool __fastcall sub_1FA4C(int a1, int a2)
{
  _DWORD *v4; // r5

  v4 = (_DWORD *)sub_163EA0(a1);
  return (!a2 || *(char *)(*(_DWORD *)(sub_171280(a2) + 24) + 1) >= 0)
      && *v4 == 2
      && *(_DWORD *)(sub_163EA0(a1) + 4) == 4;
}
