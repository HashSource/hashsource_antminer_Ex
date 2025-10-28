void __fastcall sub_E82EC(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  (*(void (**)(void))(a1[22] + 32))();
  (*(void (**)(void))(a1[20] + 44))();
  (*(void (**)(void))(a1[21] + 44))();
  v2 = (void *)a1[19];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[17];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[18];
  if ( v4 )
    free(v4);
}
