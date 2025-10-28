void __fastcall sub_345830(_DWORD *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( !v1 )
    sub_33D234("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFF, 0);
  sub_345074(a1, v1 - 1, 1, 0);
}
