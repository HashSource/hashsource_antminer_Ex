int __fastcall sub_92AD8(int a1)
{
  if ( dword_475204 )
    return dword_475204 & a1;
  if ( sub_230218(dword_4751FC, &dword_475204) )
    sub_946D8("Error reading capability of agent");
  return dword_475204 & a1;
}
