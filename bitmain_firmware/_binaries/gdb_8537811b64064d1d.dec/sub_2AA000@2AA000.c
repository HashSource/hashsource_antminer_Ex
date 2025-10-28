int __fastcall sub_2AA000(int a1)
{
  if ( (*(_BYTE *)(a1 + 40) & 7) == 3 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 212))();
  ((void (__fastcall *)(int))loc_2A6C70)(5);
  return 0;
}
