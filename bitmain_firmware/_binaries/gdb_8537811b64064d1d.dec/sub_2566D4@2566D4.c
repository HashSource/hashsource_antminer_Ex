int __fastcall sub_2566D4(int a1, const char *a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_242FB4();
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 28))(*v4);
  return fputs(a2, *(FILE **)(a1 + 4));
}
