int __fastcall sub_2A8EC0(int a1)
{
  __int64 v2; // r2
  int result; // r0

  if ( !*(_DWORD *)(a1 + 8) )
    sub_2A6BE4("cache.c", 515);
  if ( sub_2A8CF0() > dword_48BBE8 || (result = sub_2A8DEC()) != 0 )
  {
    HIDWORD(v2) = dword_48BBE4;
    *(_DWORD *)(a1 + 12) = off_411A7C;
    if ( HIDWORD(v2) )
    {
      LODWORD(v2) = *(_DWORD *)(HIDWORD(v2) + 16);
      *(_QWORD *)(a1 + 16) = v2;
      *(_DWORD *)(v2 + 20) = a1;
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16) = a1;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = a1;
      *(_DWORD *)(a1 + 16) = a1;
    }
    dword_48BBE4 = a1;
    ++dword_48BBE8;
    return 1;
  }
  return result;
}
