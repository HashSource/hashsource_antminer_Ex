int __fastcall subject_notify_all(int result, int a2)
{
  int v3; // [sp+4h] [bp-10h]
  int i; // [sp+Ch] [bp-8h]

  v3 = result;
  for ( i = 0; i < *(_DWORD *)(v3 + 1024); ++i )
    result = (*(int (__fastcall **)(int))(v3 + 4 * i))(a2);
  return result;
}
