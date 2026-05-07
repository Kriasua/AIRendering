def main():
    import turtle

    screen = turtle.Screen()
    screen.title("Function Plot: y = x")
    screen.setup(width=800, height=800)

    pen = turtle.Turtle()
    pen.hideturtle()
    pen.speed(0)

    # Draw x-axis
    pen.penup()
    pen.goto(-350, 0)
    pen.pendown()
    pen.goto(350, 0)

    # Draw y-axis
    pen.penup()
    pen.goto(0, -350)
    pen.pendown()
    pen.goto(0, 350)

    # Draw y = x
    pen.color("blue")
    pen.width(2)
    pen.penup()
    pen.goto(-300, -300)
    pen.pendown()
    pen.goto(300, 300)

    print("Displaying plot window for y = x ...")
    screen.mainloop()


if __name__ == "__main__":
    main()
