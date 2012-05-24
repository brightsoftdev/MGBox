# MGBox - A UITableView replacement with simplified API

## Key Features

- Rapid table creation without verbose code requirements
- Easy subclassing for creating custom box styles
- Optional edge snapping on scroll
- Box lines accept `NSStrings` and `UIImages`, automatically wrapping them in 
  `UILabels` and `UIImageViews`
- Box lines accept and automatically layout arbitrary `UIViews` 
- Create box lines with multiline text, automatically formatted and sized
- Automatic line content layout, with intelligent handling of space limitations
- Separate arrays for `topLines`, `middleLines`, and `bottomLines`, to simplify 
  common patterns
- Animated box adding, removing, and moving
- A convenience `screenshot` method for capturing `UIImages` of boxes with 
  subtle drop shadows

## Setup

1. Add the MGBox folder to your project

## Example Usage

### Create a Scroll Container

```objc
MGScrollView *scroller = [[MGScrollView alloc] initWithFrame:CGRectMake(0, 0, 320, 460];
[self.view addSubview:scroller];
```

### Add a Box to the Scroller

```objc
MGStyledBox *box = [MGStyledBox box];
[scroller.boxes addObject:box];
```

### Add Some Lines to the Box

```objc

// a header line
MGBoxLine *header = [MGBoxLine lineWithLeft:@"My First Box" right:nil];
header.font = [UIFont fontWithName:@"HelveticaNeue-Bold" size:16];
[box.topLines addObject:header];

// a string on the left and a horse on the right
UIImage *image = [UIImage imageNamed:@"horse"];
MGBoxLine *line1 = [MGBoxLine lineWithLeft:@"A string on the left" right:image];
[box.topLines addObject:line1];
```

## Add a Box with Multiline Text

```objc

// add a second box
MGStyledBox *box2 = [MGStyledBox box];
[scroller.boxes addObject:box2];

// add a box line with multiline text
NSString *blah = @"Multiline content is automatically sized and formatted "
            "given an NSString, UIFont, and desired padding.";
MGBoxLine *multiline = [MGBoxLine multilineWithText:blah font:nil padding:24];
[box2.topLines addObject:multiline];
```

### Tell the MGSCrollView to Draw It All To Screen

```objc
[scroller drawBoxesWithSpeed:0.6];
```
