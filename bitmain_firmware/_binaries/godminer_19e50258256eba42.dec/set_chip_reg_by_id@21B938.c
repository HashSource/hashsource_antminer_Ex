int __fastcall set_chip_reg_by_id(int a1, int a2)
{
  int v2; // r3
  int v5; // [sp+Ch] [bp-20h] BYREF
  int fake_regio_runtime; // [sp+10h] [bp-1Ch]
  int i; // [sp+14h] [bp-18h]
  _DWORD *all_created_runtime; // [sp+18h] [bp-14h]
  int v9; // [sp+1Ch] [bp-10h]
  int v10; // [sp+20h] [bp-Ch]
  int v11; // [sp+24h] [bp-8h]

  v10 = a1;
  v9 = a1;
  v5 = 0;
  all_created_runtime = get_all_created_runtime(&v5);
  for ( i = 0; i < v5; ++i )
  {
    if ( v9 == *(_DWORD *)(all_created_runtime[i] + 264) )
    {
      v2 = all_created_runtime[i];
      goto LABEL_7;
    }
  }
  v2 = 0;
LABEL_7:
  fake_regio_runtime = v2;
  if ( !v2 )
    fake_regio_runtime = get_fake_regio_runtime(v10);
  v11 = fake_regio_runtime;
  return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 296))(fake_regio_runtime, a2);
}
