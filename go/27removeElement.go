package main
import(
    "fmt"
)

func removeElement(nums []int, val int) int {
    removeNums:= 0
    index := 0
    for _,num := range nums{
        if num == val {
            removeNums += 1
        }else {
            nums[index] = num
            index += 1
        }
    }
    return len(nums) - removeNums
}

func main(){
    nums := []int {1,2,2,3,3,4}
    fmt.Println(removeElement(nums, 2))
    fmt.Println(nums)
}
