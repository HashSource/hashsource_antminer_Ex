int __fastcall sub_18485C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  int v4; // r0
  void *v5; // r0
  void *v6; // r0

  sub_F85A4(a1);
  ((void (__fastcall *)(void *, int (__fastcall *)(int (__fastcall *)(int, int), int, int), int, int))loc_1E0CA4)(
    &unk_48791C,
    sub_182DB4,
    a1,
    a1 + 172);
  v2 = *(void **)(a1 + 40);
  if ( v2 )
    free(v2);
  v3 = *(void **)(a1 + 56);
  if ( v3 )
    free(v3);
  sub_2359FC(*(_DWORD *)(a1 + 164));
  v4 = *(_DWORD *)(a1 + 144);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  sub_93A78((int *)(a1 + 60));
  sub_940B0(a1 + 96, *(_DWORD **)(a1 + 104));
  sub_940B0(a1 + 72, *(_DWORD **)(a1 + 80));
  v5 = *(void **)(a1 + 60);
  if ( v5 )
    sub_339E8C(v5);
  v6 = *(void **)(a1 + 52);
  if ( v6 )
    free(v6);
  return a1;
}
