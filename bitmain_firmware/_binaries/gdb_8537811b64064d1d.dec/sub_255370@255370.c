void __fastcall sub_255370(_DWORD *a1)
{
  struct obstack *v2; // r4

  v2 = (struct obstack *)(a1 + 1);
  sub_323BAC(*a1);
  obstack_free(v2, 0);
  free(a1);
}
