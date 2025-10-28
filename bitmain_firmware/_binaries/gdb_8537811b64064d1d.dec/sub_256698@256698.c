size_t __fastcall sub_256698(int a1, const void *a2, size_t a3)
{
  _DWORD *v6; // r0

  v6 = (_DWORD *)sub_242FB4();
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 28))(*v6);
  return fwrite(a2, a3, 1u, *(FILE **)(a1 + 4));
}
