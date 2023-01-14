string int_to_binary(int decimal)
{
    if (decimal == 0)
    {
        return "0";
    }
    if (decimal == 1)
    {
        return "1";
    }
    return int_to_binary(decimal / 2) + int_to_binary(decimal % 2);
}
