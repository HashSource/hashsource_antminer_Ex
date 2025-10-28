int __fastcall sub_BA3D0(int result)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(result + 372); ++i )
    *(_DWORD *)(*(_DWORD *)(result + 568) + 44 * i + 16) = 0;
  return result;
}
