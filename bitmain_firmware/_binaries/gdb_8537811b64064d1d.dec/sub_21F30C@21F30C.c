int __fastcall sub_21F30C(int result, int a2)
{
  if ( a2 )
    return sub_21F220(
             a2,
             *(_DWORD *)result,
             **(_DWORD **)(result + 4),
             *(_DWORD *)(result + 8),
             **(char ***)(result + 12),
             **(char ***)(result + 16),
             **(_DWORD **)(result + 20));
  return result;
}
