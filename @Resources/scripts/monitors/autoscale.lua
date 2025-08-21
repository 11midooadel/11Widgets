function Update()
	function AutoScale(num, decimals)
		if num == 0 then
			return 0, "0 B"
		end

		local units = { "B", "KB", "MB", "GB", "TB", "PB" }
		local i = 1
		while num >= 1000 and i < #units do
			num = num / 1024
			i = i + 1
		end

		local formattedNum = string.format("%." .. decimals .. "f", num)
		local formattedString = formattedNum .. " " .. units[i]

		return tonumber(formattedNum), formattedString
	end

	SkinNum = SELF:GetNumberOption('NumValue', 0)
	SkinDecimals = SELF:GetNumberOption('Decimals', 0)

	return AutoScale(SkinNum, SkinDecimals)
end