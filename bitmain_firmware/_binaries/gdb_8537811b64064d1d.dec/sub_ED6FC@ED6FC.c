int __fastcall sub_ED6FC(int a1, int a2)
{
  if ( !a2 || *(_DWORD *)(a2 + 76) || *(_DWORD *)(a2 + 80) )
  {
    ((void (__fastcall *)(int))loc_ED54C)(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)a1 = a1 + 8;
  }
  return a1;
}
