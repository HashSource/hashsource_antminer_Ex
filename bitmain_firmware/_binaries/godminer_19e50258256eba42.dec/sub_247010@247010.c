int __fastcall sub_247010(int result)
{
  int v1; // [sp+4h] [bp-8h]

  v1 = result;
  if ( *(_BYTE *)(result + 232) )
    result = sub_246FA4(result);
  *(_QWORD *)(v1 + 80) = -1;
  return result;
}
