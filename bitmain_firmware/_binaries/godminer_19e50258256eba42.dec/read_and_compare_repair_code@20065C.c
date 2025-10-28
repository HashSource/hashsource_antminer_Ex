bool __fastcall read_and_compare_repair_code(int a1, int a2, int a3, int a4)
{
  int v9; // [sp+1Ch] [bp-10h] BYREF
  int v10; // [sp+20h] [bp-Ch] BYREF
  int v11; // [sp+24h] [bp-8h] BYREF

  return _isoc99_fscanf(a1, "%u %u %u", &v9, &v10, &v11) == 3 && a2 == v9 && a3 == v10 && a4 == v11;
}
