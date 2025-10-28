int __fastcall sync_get_status_base2(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  if ( *(_BYTE *)(a1 + 144) )
    return sub_513CC(a1, a2, a3, a4, a5, a6);
  else
    return 4;
}
