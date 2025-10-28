_BYTE *__fastcall sub_EFD24(_BYTE *result)
{
  if ( !result[36] )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)result + 40))(result);
  return result;
}
