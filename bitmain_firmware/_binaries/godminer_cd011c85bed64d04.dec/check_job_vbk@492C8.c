int __fastcall check_job_vbk(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 1152) || !*(_DWORD *)(a2 + 1600) )
    return 2;
  if ( !memcmp((const void *)(a1 + 44), (const void *)(a2 + 492), 0x10u) )
    return 0;
  return 2;
}
