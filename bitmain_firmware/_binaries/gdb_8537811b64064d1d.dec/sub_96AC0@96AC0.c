int __fastcall sub_96AC0(int result)
{
  int v1; // r1

  if ( dword_475514 == dword_475518 )
    return sub_96B84(&dword_475510);
  v1 = dword_475514 + 4;
  if ( dword_475514 )
    *(_DWORD *)dword_475514 = result;
  dword_475514 = v1;
  return result;
}
